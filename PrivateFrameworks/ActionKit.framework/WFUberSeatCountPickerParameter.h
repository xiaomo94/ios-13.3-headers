/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFUberSeatCountPickerParameter : WFEnumerationParameter <WFActionEventObserver> {
    WFAction * _action;
    WFUberProduct * _product;
}

@property (nonatomic, retain) WFAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFUberProduct *product;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (bool)isHidden;
- (id)product;
- (void)setAction:(id)arg1;
- (void)setProduct:(id)arg1;
- (void)updateProduct;

@end
