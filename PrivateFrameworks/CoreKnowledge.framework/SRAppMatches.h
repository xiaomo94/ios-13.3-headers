/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface SRAppMatches : NSObject <NSCopying, NSSecureCoding> {
    void bundleIDs;
    void matchType;
    void signalsJSON;
}

@property (nonatomic, readonly) NSArray *bundleIDs;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long matchType;
@property (nonatomic, readonly) NSData *signalsJSON;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIDs;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchType:(long long)arg1 bundleIDs:(id)arg2 signalsJSON:(id)arg3;
- (long long)matchType;
- (id)signalsJSON;

@end
