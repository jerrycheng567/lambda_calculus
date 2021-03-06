#ifndef lambda_calculus_Compiletime_PAIR
#define lambda_calculus_Compiletime_PAIR
#include "lambda_calculus.hpp"
#include "propositional_logic.hpp"
namespace Compiletime_lambda_calculus
{
    typedef
    abstraction
    <
        abstraction
        <
            abstraction
            <
                application
                <
                    application
                    <
                        variable< 1 >,
                        variable< 3 >
                    >,
                    variable< 2 >
                >
            >
        >
    > Pair;
    typedef
    abstraction
    <
        application
        <
            variable< 1 >,
            True
        >
    > First;
    typedef
    abstraction
    <
        application
        <
            variable< 1 >,
            False
        >
    > Second;
}
#endif //lambda_calculus_Compiletime_PAIR
