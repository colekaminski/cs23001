//  Stack class test program
//
//  Tests: XXX 
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
       
        x.push(80);

        stack<int>  y=x;
        
        // VERIFY

        assert((y.top())==80);
        assert((y.pop())==80);
        
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  x;

        x.push('0');
        x.push('+');
        x.push('x');
        
        stack<char>  y=x;

        // VERIFY

        assert((y.top())=='x');
        assert((y.pop())=='x');
        assert((y.top())=='+');
        assert((y.pop())=='+');
        assert((y.top())=='0');
        assert((y.pop())=='0');
        
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(80);
        x.push(69);
        x.push(900);
        stack<int>  y=x;
        
        // VERIFY

        assert((y.top())==900);
        assert((y.pop())==900);
        assert((y.top())==69);
        assert((y.pop())==69);
        assert((y.top())==80);
        assert((y.pop())==80);
        
        
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        x.push("Hello");
        stack<String>  y=x;
        

        // VERIFY

        assert((y.top())=="Hello");
        assert((y.pop())=="Hello");
        
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        x.push("Hello");
        x.push("Hello2");
        stack<String>  y=x;
        

        // VERIFY
    
        assert((y.top())=="Hello2");
        assert((y.pop())=="Hello2");
        assert((y.top())=="Hello");
        assert((y.pop())=="Hello");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        x.push("Hello");
        x.push("KYLE NOVAK IS THE BEST EVER");
        x.push("00500600900");
        x.push("&$*(#^$*&(*#)($*)(&#*&#$&#^$&*$#&&*#&))");
        x.push('0');
        x.push("0");
        x.push("48798324789253987984598437598347958347985734987598347598347985797483927498237498239482734987298374982379487348795873749857349857893475893745893748957394875983475748978943984798279834798237899893282748928934758934985");
        stack<String>  y=x;

        // VERIFY

        assert((y.top())=="48798324789253987984598437598347958347985734987598347598347985797483927498237498239482734987298374982379487348795873749857349857893475893745893748957394875983475748978943984798279834798237899893282748928934758934985");
        assert((y.pop())=="48798324789253987984598437598347958347985734987598347598347985797483927498237498239482734987298374982379487348795873749857349857893475893745893748957394875983475748978943984798279834798237899893282748928934758934985");
        assert((y.top())=="0");
        assert((y.pop())=="0");
        assert((y.top())=="0");
        assert((y.pop())=="0");
        assert((y.top())=="&$*(#^$*&(*#)($*)(&#*&#$&#^$&*$#&&*#&))");
        assert((y.pop())=="&$*(#^$*&(*#)($*)(&#*&#$&#^$&*$#&&*#&))");
        assert((y.top())=="00500600900");
        assert((y.pop())=="00500600900");
        assert((y.top())=="KYLE NOVAK IS THE BEST EVER");
        assert((y.pop())=="KYLE NOVAK IS THE BEST EVER");
        assert((y.top())=="Hello");
        assert((y.pop())=="Hello");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing ASSIGN OP." << std::endl;
    return 0;
}

