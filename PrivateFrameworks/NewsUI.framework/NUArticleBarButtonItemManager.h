/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleBarButtonItemManager : NSObject {
    <NUArticleBarButtonItemManagerDelegate> * _delegate;
    UIBarButtonItem * _doneBarButtonItem;
    UIBarButtonItem * _nextBarButtonItem;
    NUArticleNextButton * _nextButton;
    UIBarButtonItem * _shareBarButtonItem;
    UIViewController * _viewController;
}

@property (nonatomic) <NUArticleBarButtonItemManagerDelegate> *delegate;
@property (nonatomic, retain) UIBarButtonItem *doneBarButtonItem;
@property (nonatomic, readonly) UIBarButtonItem *nextBarButtonItem;
@property (nonatomic, readonly) NUArticleNextButton *nextButton;
@property (nonatomic, retain) UIBarButtonItem *shareBarButtonItem;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedFrameForDoneBarButtonItemForTraitCollection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedFrameForNextArticleButtonForTraitCollection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedFrameForShareBarButtonItemForTraitCollection:(id)arg1;
- (void)applyPageStyleToNextBarButtonItem:(id)arg1;
- (id)createDoneBarButtonItem;
- (id)createFlexibleSpacerBarButtonItem;
- (id)createShareBarButtonItem;
- (id)delegate;
- (void)doDone:(id)arg1;
- (void)doNext:(id)arg1;
- (void)doShare:(id)arg1;
- (id)doneBarButtonItem;
- (id)initWithViewController:(id)arg1;
- (id)nextBarButtonItem;
- (id)nextButton;
- (void)positionBarButtonItemsForTraitCollection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneBarButtonItem:(id)arg1;
- (void)setShareBarButtonItem:(id)arg1;
- (id)shareBarButtonItem;
- (void)sizeBarButtonItemsForTraitCollection:(id)arg1;
- (id)viewController;

@end
