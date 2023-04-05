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
        
        // VERIFY
        assert((x.top())==80);
        assert((x.pop())==80);
        
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  x;
        x.push('0');
        x.push('+');
        x.push('x');
        
        // VERIFY
        assert((x.top())=='x');
        assert((x.pop())=='x');
        assert((x.top())=='+');
        assert((x.pop())=='+');
        assert((x.top())=='0');
        assert((x.pop())=='0');
        
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(80);
        x.push(69);
        x.push(900);
        
        // VERIFY
        assert((x.top())==900);
        assert((x.pop())==900);
        assert((x.top())==69);
        assert((x.pop())==69);
        assert((x.top())==80);
        assert((x.pop())==80);
        
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        x.push("Hello");
        

        // VERIFY
        assert((x.top())=="Hello");
        assert((x.pop())=="Hello");
        
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        x.push("Hello");
        x.push("Hello2");
        

        // VERIFY
        assert((x.top())=="Hello2");
        assert((x.pop())=="Hello2");
        assert((x.top())=="Hello");
        assert((x.pop())=="Hello");
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
        

        // VERIFY
        assert((x.top())=="48798324789253987984598437598347958347985734987598347598347985797483927498237498239482734987298374982379487348795873749857349857893475893745893748957394875983475748978943984798279834798237899893282748928934758934985");
        assert((x.pop())=="48798324789253987984598437598347958347985734987598347598347985797483927498237498239482734987298374982379487348795873749857349857893475893745893748957394875983475748978943984798279834798237899893282748928934758934985");
        assert((x.top())=="0");
        assert((x.pop())=="0");
        assert((x.top())=="0");
        assert((x.pop())=="0");
        assert((x.top())=="&$*(#^$*&(*#)($*)(&#*&#$&#^$&*$#&&*#&))");
        assert((x.pop())=="&$*(#^$*&(*#)($*)(&#*&#$&#^$&*$#&&*#&))");
        assert((x.top())=="00500600900");
        assert((x.pop())=="00500600900");
        assert((x.top())=="KYLE NOVAK IS THE BEST EVER");
        assert((x.pop())=="KYLE NOVAK IS THE BEST EVER");
        assert((x.top())=="Hello");
        assert((x.pop())=="Hello");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing PUSH POP." << std::endl;
    return 0;
}

