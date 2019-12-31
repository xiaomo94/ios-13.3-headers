/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITableViewHeaderFooterView : UIView <UITableConstantsHeaderFooterProviding, UITableViewSubviewReusing> {
    UIImage * _backgroundImage;
    UIView * _backgroundView;
    <UITableConstants> * _constants;
    UIView * _contentView;
    _UITableViewHeaderFooterViewLabel * _detailLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    struct { 
        unsigned int isHeader : 1; 
        unsigned int labelBackgroundColorNeedsUpdate : 1; 
        unsigned int detailLabelBackgroundColorNeedsUpdate : 1; 
        unsigned int floating : 1; 
        unsigned int stripPadding : 1; 
        unsigned int isTopHeader : 1; 
        unsigned int didSetSectionHeader : 1; 
        unsigned int didSetupDefaults : 1; 
        unsigned int insetsContentViewsToSafeArea : 1; 
        unsigned int tableViewHasBeenExplicitlySet : 1; 
    }  _headerFooterFlags;
    _UITableViewHeaderFooterViewLabel * _label;
    double  _leadingMarginWidth;
    double  _maxTitleWidth;
    NSString * _reuseIdentifier;
    <UITable> * _table;
    long long  _tableViewStyle;
    long long  _textAlignment;
    double  _trailingMarginWidth;
}

@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, retain) UIView *backgroundView;
@property (getter=_constants, setter=_setConstants:, nonatomic, retain) <UITableConstants> *constants;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (getter=_effectiveSafeAreaInsets, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } effectiveSafeAreaInsets;
@property (nonatomic) bool floating;
@property (readonly) unsigned long long hash;
@property (getter=_insetsContentViewsToSafeArea, setter=_setInsetsContentViewsToSafeArea:, nonatomic) bool insetsContentViewsToSafeArea;
@property (getter=_marginWidth, setter=_setMarginWidth:, nonatomic) double marginWidth;
@property (nonatomic) double maxTitleWidth;
@property (nonatomic, copy) NSString *reuseIdentifier;
@property (getter=_rightMarginWidth, setter=_setRightMarginWidth:, nonatomic) double rightMarginWidth;
@property (nonatomic) bool sectionHeader;
@property (getter=_stripPadding, setter=_setStripPadding:, nonatomic) bool stripPadding;
@property (readonly) Class superclass;
@property (nonatomic) <UITable> *table;
@property (nonatomic) UITableView *tableView;
@property (nonatomic) long long tableViewStyle;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, readonly) UILabel *textLabel;
@property (getter=_isTopHeader, setter=_setTopHeader:, nonatomic) bool topHeader;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_defaultFontForHeaderFooterView:(id)arg1;
+ (id)_defaultFontForTableViewStyle:(long long)arg1 isSectionHeader:(bool)arg2;
+ (id)_defaultPlainHeaderFooterFont;
+ (id)_defaultTextColorForTableViewStyle:(long long)arg1 isSectionHeader:(bool)arg2;
+ (double)defaultFooterHeightForStyle:(long long)arg1;
+ (double)defaultHeaderHeightForStyle:(long long)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundRectForWidth:(double)arg1;
- (id)_constants;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectForWidth:(double)arg1;
- (id)_defaultTextColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_detailLabelFrame;
- (struct CGSize { double x1; double x2; })_detailTextSizeForWidth:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveSafeAreaInsets;
- (bool)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1;
- (bool)_hostsLayoutEngineAllowsTAMIC_NO;
- (bool)_insetsContentViewsToSafeArea;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsToBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsToContentRect;
- (void)_invalidateDetailLabelBackgroundColor;
- (void)_invalidateLabelBackgroundColor;
- (bool)_isFloating;
- (bool)_isTopHeader;
- (bool)_isTransparentFocusRegion;
- (id)_label:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelFrame;
- (double)_marginWidth;
- (double)_rightMarginWidth;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setConstants:(id)arg1;
- (void)_setInsetsContentViewsToSafeArea:(bool)arg1;
- (void)_setMarginWidth:(double)arg1;
- (void)_setRightMarginWidth:(double)arg1;
- (void)_setStripPadding:(bool)arg1;
- (void)_setTableViewStyle:(long long)arg1 updateFrame:(bool)arg2;
- (void)_setTopHeader:(bool)arg1;
- (void)_setupBackgroundView;
- (void)_setupDefaultsIfNecessary;
- (void)_setupLabelAppearance;
- (void)_setupLabelForSourceList:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 stripPaddingForAbuttingView:(bool)arg2 isTopHeader:(bool)arg3;
- (bool)_stripPadding;
- (id)_table;
- (void)_tableViewDidUpdateMarginWidth;
- (struct CGSize { double x1; double x2; })_textSizeForWidth:(double)arg1;
- (void)_updateBackgroundImage;
- (void)_updateBackgroundView;
- (void)_updateContentAndBackgroundView;
- (void)_updateDetailLabelBackgroundColor;
- (void)_updateDetailLabelBackgroundColorIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_updatedContentViewFrameForTargetWidth:(double)arg1;
- (bool)_useDetailText;
- (id)backgroundImage;
- (id)backgroundView;
- (id)contentView;
- (id)detailTextLabel;
- (void)didMoveToSuperview;
- (void)encodeWithCoder:(id)arg1;
- (bool)floating;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (double)maxTitleWidth;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (bool)sectionHeader;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setFloating:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaxTitleWidth:(double)arg1;
- (void)setNeedsUpdateConstraints;
- (void)setReuseIdentifier:(id)arg1;
- (void)setSectionHeader:(bool)arg1;
- (void)setTable:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTableViewStyle:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)table;
- (id)tableView;
- (long long)tableViewStyle;
- (id)text;
- (long long)textAlignment;
- (id)textLabel;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)_cnui_applyContactStyle;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })ts_cellSeparatorInsets;

@end
