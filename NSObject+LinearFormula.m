//
//  NSObject+LinearFormula.m

//

#import "NSObject+LinearFormula.h"

@implementation NSObject (LinearFormula)


- (CGFloat)resultWithValue1:(SDValue)value1 andValue2:(SDValue)value2 {
    CGFloat a = (value1.result - value2.result) / (value1.consult - value2.consult);
    CGFloat b = value1.result - (a * value1.consult);
    
    
    return a * [(NSNumber *)self floatValue]  + b;
}

@end
