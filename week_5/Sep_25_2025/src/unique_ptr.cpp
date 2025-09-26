#include <memory>
#include "student.h"

int main()
{
    /*
    unique_ptr:
    - sole ownership of a resource.
    - cannot be copied, only moved.
    - Automatically deletes resource when out of scope
    */
    std::unique_ptr<Student> up = std::make_unique<Student>();

    /*
    shared_ptr:
    - shared ownership, multiple pointers can manage the same objext
    - internally uses reference counting
    - deletes the object only when last owner is gone
    - very similar to python memory management
    - avoid creating cycles with shared_ptr (i assume cycles of ownership)
    */
    std::shared_ptr<Student> sp1 = std::make_shared<Student>();
    std::shared_ptr<Student> sp2 = sp1;
    return 0;

    struct B;
    struct A
    {
        std::shared_ptr<B> b_ptr;
    };
    struct B
    {
        std::shared_ptr<A> a_ptr;
    };

    /*
    this creates a cycle since we are pointing to a which points to be and
    etc
    */
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();
    a->b_ptr = b;
    b->a_ptr = a; // cycle created, memory leak!
 
    /*
    sol using weak_ptr

    weak_ptr
    - non-owning observer of a shared_ptr
    - used to prevent cyclic references
    */
    struct B;
    struct A
    {
        std::shared_ptr<B> b_ptr;
    };
    struct B
    {
        std::weak_ptr<A> a_ptr; // weak ptr doesnt increase ref count
    };

    /*
    this creates a cycle since we are pointing to a which points to be and
    etc
    */
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();
    a->b_ptr = b;
    b->a_ptr = a; // cycle fixed
}