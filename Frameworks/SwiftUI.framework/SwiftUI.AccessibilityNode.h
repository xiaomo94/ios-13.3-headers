/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
 */

@interface SwiftUI.AccessibilityNode : NSObject <UIAccessibilityIdentification> {
    void attachmentsStorage;
    void cachedCombinedAttachment;
    void children;
    void focusableAncestor;
    void oldAttachmentForNotification;
    void parent;
    void skipNotifyForAttachmentChanged;
    void viewRendererHost;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } accessibilityActivationPoint;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedHint;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedLabel;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedValue;
@property (nonatomic, copy) NSArray *accessibilityCustomActions;
@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic) bool accessibilityElementsHidden;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessibilityFrame;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityLanguage;
@property (nonatomic, retain) UIBezierPath *accessibilityPath;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) bool accessibilityViewIsModal;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) bool isAccessibilityElement;
@property (nonatomic) bool shouldGroupAccessibilityChildren;

- (void).cxx_destruct;
- (unsigned long long)_accessibilityAutomationType;
- (bool)_accessibilityScrollToVisible;
- (bool)_internal_handleCustomActionWithUiAction:(id)arg1;
- (bool)accessibilityActivate;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityAttributedHint;
- (id)accessibilityAttributedLabel;
- (id)accessibilityAttributedValue;
- (id)accessibilityCustomActions;
- (void)accessibilityDecrement;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityElements;
- (bool)accessibilityElementsHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (id)accessibilityPath;
- (bool)accessibilityPerformEscape;
- (bool)accessibilityPerformMagicTap;
- (bool)accessibilityScroll:(long long)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)accessibilityViewIsModal;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isAccessibilityElement;
- (void)setAccessibilityActivationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAccessibilityAttributedHint:(id)arg1;
- (void)setAccessibilityAttributedLabel:(id)arg1;
- (void)setAccessibilityAttributedValue:(id)arg1;
- (void)setAccessibilityCustomActions:(id)arg1;
- (void)setAccessibilityElements:(id)arg1;
- (void)setAccessibilityElementsHidden:(bool)arg1;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityLanguage:(id)arg1;
- (void)setAccessibilityPath:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAccessibilityViewIsModal:(bool)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (void)setShouldGroupAccessibilityChildren:(bool)arg1;
- (bool)shouldGroupAccessibilityChildren;

@end
