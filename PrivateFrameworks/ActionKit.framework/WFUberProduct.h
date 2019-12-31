/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFUberProduct : MTLModel <MTLJSONSerializing, NSSecureCoding> {
    NSNumber * _capacity;
    NSString * _displayName;
    NSURL * _pictureURL;
    NSString * _productDescription;
    unsigned long long  _productGroup;
    NSString * _productId;
    bool  _shared;
}

@property (nonatomic, readonly) NSNumber *capacity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *pictureURL;
@property (nonatomic, readonly) NSString *productDescription;
@property (nonatomic, readonly) unsigned long long productGroup;
@property (nonatomic, readonly) NSString *productId;
@property (nonatomic, readonly) bool shared;
@property (readonly) Class superclass;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)pictureURLJSONTransformer;
+ (id)productGroupJSONTransformer;
+ (id)productWithProductId:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capacity;
- (id)displayName;
- (id)initWithProductId:(id)arg1;
- (id)pictureURL;
- (id)productDescription;
- (unsigned long long)productGroup;
- (id)productId;
- (bool)shared;

@end
