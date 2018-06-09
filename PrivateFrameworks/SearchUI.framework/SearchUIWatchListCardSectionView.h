/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIWatchListCardSectionView : SearchUICardSectionView <SearchUIWatchListCardRowModelDelegate> {
    SearchUIButton * _button;
    TLKSimpleRowView * _rowView;
}

@property (retain) SearchUIButton *button;
@property (retain) NUIContainerStackView *contentView;
@property (retain) SearchUIWatchListCardRowModel *rowModel;
@property (retain) TLKSimpleRowView *rowView;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)button;
- (void)buttonPressed;
- (void)didUpdateRowModel:(id)arg1 withText:(id)arg2 buttonState:(long long)arg3;
- (void)didUpdateRowModel:(id)arg1 withText:(id)arg2 buttonState:(long long)arg3 image:(id)arg4;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)rowView;
- (void)setButton:(id)arg1;
- (void)setRowView:(id)arg1;
- (id)setupContentView;
- (void)updateText:(id)arg1 image:(id)arg2 buttonState:(long long)arg3;
- (void)updateWithRowModel:(id)arg1;
- (void)updateWithRowModel:(id)arg1 animated:(bool)arg2;

@end
