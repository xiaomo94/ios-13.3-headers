/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPLinkedLayout : TSWPLayout

@property (nonatomic, retain) TSWPLayoutManager *layoutManager;
@property (nonatomic) bool textLayoutValid;

- (bool)descendersCannotClip;
- (bool)discardLayoutsForDrawableAttachmentsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)i_validateTextLayout;
- (bool)isLastTarget;
- (bool)isLinked;
- (bool)isOverflowing;
- (void)killDrawableLayouts:(id)arg1;
- (id)layoutManager;
- (id)nextTargetFirstColumn;
- (id)nextTargetTopicNumbers;
- (id)previousTargetLastColumn;
- (id)previousTargetTopicNumbers;
- (bool)repShouldPreventCaret;
- (void)setLayoutManager:(id)arg1;
- (void)setTextLayoutValid:(bool)arg1;
- (void)validate;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)wrappableChildInvalidated:(id)arg1;

@end
