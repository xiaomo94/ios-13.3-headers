/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsSuggestionTableViewCell : UITableViewCell {
    UILabel * _resultAuxSubtitleLabel;
    UILabel * _resultTitleLabel;
}

@property (nonatomic, retain) UILabel *resultAuxSubtitleLabel;
@property (nonatomic, retain) UILabel *resultTitleLabel;

+ (id)_symbolConfigurationForFont:(id)arg1;

- (void).cxx_destruct;
- (void)_preferredContentSizeChanged:(id)arg1;
- (id)_setupResultAuxSubtitleLabel;
- (id)_setupResultTitleLabel;
- (void)_setupSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (bool)hasAccessory;
- (struct CGSize { double x1; double x2; })imageViewSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (id)resultAuxSubtitleLabel;
- (id)resultTitleLabel;
- (void)setAttributedTitle:(id)arg1 resultCount:(unsigned long long)arg2 categoryImage:(id)arg3;
- (void)setAttributedTitle:(id)arg1 subtitle:(id)arg2 auxSubtitle:(id)arg3;
- (void)setResultAuxSubtitleLabel:(id)arg1;
- (void)setResultTitleLabel:(id)arg1;
- (void)setTitle:(id)arg1 resultCount:(unsigned long long)arg2 categoryImage:(id)arg3;
- (void)setTitle:(id)arg1 subtitle:(id)arg2 auxSubtitle:(id)arg3;
- (bool)shouldUseAccessibilityLayout;

@end
