/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding> {
    NSDate * _lastResetDate;
    NSDate * _lastViolationDate;
}

@property (readonly) NSDate *lastResetDate;
@property (readonly) NSDate *lastViolationDate;

+ (id)noViolation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastViolationDate:(id)arg1 lastViolationResetDate:(id)arg2;
- (id)initWithLastViolationTimeInterval:(id)arg1 lastViolationResetTimeInterval:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lastResetDate;
- (id)lastViolationDate;

@end
