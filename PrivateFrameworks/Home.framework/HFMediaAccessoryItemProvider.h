/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMediaAccessoryItemProvider : HFItemProvider {
    id /* block */  _filter;
    HMHome * _home;
    bool  _includeMediaSystems;
    NSMutableSet * _mediaAccessoryItems;
    <HFCharacteristicValueSource> * _overrideValueSource;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) bool includeMediaSystems;
@property (nonatomic, retain) NSMutableSet *mediaAccessoryItems;
@property (nonatomic, retain) <HFCharacteristicValueSource> *overrideValueSource;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)home;
- (bool)includeMediaSystems;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 includeMediaSystems:(bool)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)mediaAccessoryItems;
- (id)overrideValueSource;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setMediaAccessoryItems:(id)arg1;
- (void)setOverrideValueSource:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end
