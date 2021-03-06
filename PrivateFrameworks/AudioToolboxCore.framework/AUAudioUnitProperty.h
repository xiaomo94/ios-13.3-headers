/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

@interface AUAudioUnitProperty : NSObject <NSSecureCoding> {
    unsigned int  _element;
    NSString * _key;
    unsigned int  _scope;
}

+ (id)propertyWithKey:(id)arg1;
+ (id)propertyWithKey:(id)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;

@end
