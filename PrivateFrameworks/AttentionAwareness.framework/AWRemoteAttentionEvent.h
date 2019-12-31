/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWRemoteAttentionEvent : AWAttentionEvent <NSSecureCoding> {
    long long  _usage;
    long long  _usagePage;
}

@property (nonatomic, readonly) long long usage;
@property (nonatomic, readonly) long long usagePage;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 remoteMetadata:(struct AWRemoteMetadata { long long x1; long long x2; }*)arg3;
- (long long)usage;
- (long long)usagePage;
- (void)validateMask;

@end
