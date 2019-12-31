/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
 */

@interface CLCppEncodableDataContainer : CLCppContainer {
    id  _compatibilityInfo;
    id /* block */  _encoder;
    NSData * _serialized;
}

@property (nonatomic, copy) id compatibilityInfo;
@property (nonatomic, copy) id /* block */ encoder;
@property (nonatomic, copy) NSData *serialized;

+ (id)containerWithObject:(void*)arg1 cppDataEncoder:(id /* block */)arg2 destructor:(id /* block */)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compatibilityInfo;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)encoder;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(void*)arg1 cppDataEncoder:(id /* block */)arg2 destructor:(id /* block */)arg3;
- (id)serialized;
- (void)setCompatibilityInfo:(id)arg1;
- (void)setEncoder:(id /* block */)arg1;
- (void)setSerialized:(id)arg1;

@end
