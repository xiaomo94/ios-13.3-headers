/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFunctionExpression : NSExpression {
    NSArray * _arguments;
    NSExpression * _operand;
    SEL  _selector;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (bool)_shouldUseParensWithDescription;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (id)arguments;
- (id)binaryOperatorForSelector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)function;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpressionType:(unsigned long long)arg1 operand:(id)arg2 selector:(SEL)arg3 argumentArray:(id)arg4;
- (id)initWithSelector:(SEL)arg1 argumentArray:(id)arg2;
- (id)initWithTarget:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)operand;
- (id)predicateFormat;
- (SEL)selector;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)_keypathsForDerivedPropertyValidation:(id*)arg1;
- (id)_mapKVCOperatorsToFunctionsInContext:(id)arg1;
- (id)minimalFormInContext:(id)arg1;

@end
