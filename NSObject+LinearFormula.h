//
//  NSObject+LinearFormula.h
//
// 线性公式
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

struct SDValue {
    CGFloat consult;
    CGFloat result;
};
typedef struct SDValue SDValue;


CG_INLINE SDValue
SDValueMake(CGFloat consult, CGFloat result)
{
    SDValue value;
    value.consult = consult;
    value.result = result;
    return value;
}

@interface NSObject (LinearFormula)


- (CGFloat)resultWithValue1:(SDValue)value1 andValue2:(SDValue)value2;

@end
