/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSDeliveryDuetEvent : TPSDeliveryEvent {
    TPSDeliveryDuetEventMeta * _meta;
    TPSDeliveryDuetEventSource * _source;
    NSString * _stream;
    TPSDeliveryDuetEventValue * _value;
}

@property (nonatomic, copy) TPSDeliveryDuetEventMeta *meta;
@property (nonatomic, copy) TPSDeliveryDuetEventSource *source;
@property (nonatomic, copy) NSString *stream;
@property (nonatomic, copy) TPSDeliveryDuetEventValue *value;

+ (id)classSet;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)meta;
- (id)newStateFromStateDictionary:(id)arg1;
- (void)setMeta:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setStream:(id)arg1;
- (void)setValue:(id)arg1;
- (id)source;
- (id)stream;
- (id)value;

@end
