/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface NLSessionActivityGoal : NSObject <NSSecureCoding> {
    double  _doubleValue;
    unsigned long long  _goalTypeIdentifier;
}

@property (nonatomic) unsigned long long goalTypeIdentifier;
@property (nonatomic, retain) HKQuantity *value;

+ (id)goalFromURL:(id)arg1;
+ (id)goalWithGoalTypeIdentifier:(unsigned long long)arg1 value:(id)arg2;
+ (bool)supportsSecureCoding;

- (double)_doubleValueForQuantity:(id)arg1;
- (id)_quantityForDoubleValue:(double)arg1;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)goalTypeIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithGoalTypeIdentifier:(unsigned long long)arg1 value:(id)arg2;
- (void)setGoalTypeIdentifier:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
