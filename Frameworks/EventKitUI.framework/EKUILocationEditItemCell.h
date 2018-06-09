/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUILocationEditItemCell : UITableViewCell {
    UIButton * _clearButton;
    id /* block */  _clearButtonTapped;
    UIImageView * _image;
    UIActivityIndicatorView * _spinner;
    UILabel * _title;
}

@property (nonatomic, copy) id /* block */ clearButtonTapped;

- (void).cxx_destruct;
- (void)_clearButtonTapped:(id)arg1;
- (id /* block */)clearButtonTapped;
- (id)description;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setClearButtonTapped:(id /* block */)arg1;
- (void)updateWithName:(id)arg1 sourceSupportsAvailability:(bool)arg2 availabilityRequestInProgress:(bool)arg3 availabilityType:(long long)arg4;

@end
