/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCloudIdentifier : NSObject <NSSecureCoding> {
    NSString * _identifierCode;
    NSString * _localCloudIdentifier;
}

@property (nonatomic, readonly) NSString *identifierCode;
@property (nonatomic, readonly) NSString *localCloudIdentifier;
@property (nonatomic, readonly) NSString *stringValue;

+ (id)notFoundIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifierCode;
- (id)initAsNotFoundIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalCloudIdentifier:(id)arg1 identifierCode:(id)arg2;
- (id)initWithStringValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localCloudIdentifier;
- (id)stringValue;

@end
