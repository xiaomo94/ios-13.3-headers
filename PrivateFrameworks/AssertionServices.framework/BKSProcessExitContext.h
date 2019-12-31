/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessExitContext : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _exitReason;
}

@property (nonatomic) unsigned long long exitReason;

+ (id)contextWithRBSContext:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)exitReason;
- (id)initWithCoder:(id)arg1;
- (void)setExitReason:(unsigned long long)arg1;

@end
