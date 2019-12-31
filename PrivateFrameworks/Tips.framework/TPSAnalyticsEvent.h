/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSAnalyticsEvent : NSObject <NSSecureCoding> {
    TPSAnalyticsDataProvider * _dataProvider;
    NSDate * _date;
    NSString * _deliveryInfoVersion;
}

@property (nonatomic) TPSAnalyticsDataProvider *dataProvider;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *deliveryInfoVersion;

+ (id)classSet;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_discoverabilityStream;
- (id)analyticsEventRepresentation;
- (id)dataProvider;
- (id)date;
- (id)deliveryInfoVersion;
- (id)duetEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDeliveryInfoVersion:(id)arg1;

@end
