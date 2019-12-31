/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITableCell : UIView {
    UICellAccessoryManager * _accessoryManager;
    unsigned long long  _accessoryTypes;
    UIView * _accessoryView;
    NSString * _badgeText;
    UIView * _contentView;
    bool  _editing;
    unsigned long long  _editingAccessoryTypes;
    UIView * _editingAccessoryView;
    unsigned long long  _editingStyle;
}

@property (nonatomic, retain) UICellAccessoryManager *accessoryManager;
@property (nonatomic) unsigned long long accessoryTypes;
@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, copy) NSString *badgeText;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) bool editing;
@property (nonatomic) unsigned long long editingAccessoryTypes;
@property (nonatomic, retain) UIView *editingAccessoryView;
@property (nonatomic) unsigned long long editingStyle;

- (void).cxx_destruct;
- (id)_accessoriesForAccessoryTypes:(unsigned long long)arg1 view:(id)arg2 editing:(bool)arg3;
- (id)_accessoriesForEditingStyle:(unsigned long long)arg1;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_updateAccessories;
- (void)_updateAccessoryMetrics;
- (id)accessoryManager;
- (unsigned long long)accessoryTypes;
- (id)accessoryView;
- (id)badgeText;
- (id)contentView;
- (bool)editing;
- (unsigned long long)editingAccessoryTypes;
- (id)editingAccessoryView;
- (unsigned long long)editingStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccessoryManager:(id)arg1;
- (void)setAccessoryTypes:(unsigned long long)arg1;
- (void)setAccessoryView:(id)arg1;
- (void)setBadgeText:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditingAccessoryTypes:(unsigned long long)arg1;
- (void)setEditingAccessoryView:(id)arg1;
- (void)setEditingStyle:(unsigned long long)arg1;

@end