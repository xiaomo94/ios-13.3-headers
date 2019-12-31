/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLParser : NSObject <AMSBagConsumer, AMSBagConsumer_Project> {
    <AMSBagProtocol> * _bag;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;

- (void).cxx_destruct;
- (id)bag;
- (id)bagContract;
- (id)initWithBag:(id)arg1;
- (id)initWithBagContract:(id)arg1;
- (id)isCommerceUIURL:(id)arg1;
- (void)setBag:(id)arg1;

@end
