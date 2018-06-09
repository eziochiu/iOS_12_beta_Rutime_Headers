/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRouteLabel : UIView {
    NSString * _designatedGroupLeaderName;
    UIFont * _font;
    bool  _forcesUppercaseText;
    long long  _minimumEndCharacterCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousBounds;
    NSString * _previousDesignatedGroupLeaderName;
    UIFont * _previousFont;
    bool  _previousForcesUppercaseText;
    NSMutableSet * _previousRouteNames;
    long long  _previousTruncationMode;
    MPAVRoute * _route;
    NSMutableSet * _routeNames;
    UILabel * _sizingLabel;
    NSString * _text;
    long long  _textAlignment;
    UIColor * _textColor;
    UILabel * _titleLabel;
    long long  _truncationMode;
}

@property (nonatomic, readonly) double _baselineOffsetFromBottom;
@property (setter=_setTextColorFollowsTintColor:, nonatomic) bool _textColorFollowsTintColor;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) bool forcesUppercaseText;
@property (nonatomic) long long minimumEndCharacterCount;
@property (nonatomic, retain) MPAVRoute *route;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) long long truncationMode;

- (void).cxx_destruct;
- (double)_baselineOffsetFromBottom;
- (id)_bestStringThatFitsSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)_compareLength:(id)arg1 with:(id)arg2;
- (id)_formattedRouteNameForDesignatedGroupLeaderNameText:(id)arg1 routeNamesText:(id)arg2;
- (bool)_labelFitsText:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })_labelSizeForText:(id)arg1;
- (id)_marketingNames;
- (id)_plusSeparatedRouteNames:(id)arg1;
- (void)_routeDidChangeNotification:(id)arg1;
- (id)_routeNamesSortedAlphanumeric:(id)arg1;
- (id)_routeNamesSortedLength:(id)arg1;
- (void)_setTextColorFollowsTintColor:(bool)arg1;
- (bool)_textColorFollowsTintColor;
- (id)_truncateText:(id)arg1 by:(long long)arg2;
- (void)_updateRouteLabel;
- (void)_updateTitleIfNeeded;
- (void)addRouteName:(id)arg1;
- (void)addRouteNamesFromArray:(id)arg1;
- (id)font;
- (bool)forcesUppercaseText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)minimumEndCharacterCount;
- (void)removeRouteName:(id)arg1;
- (void)removeRouteNamesFromArray:(id)arg1;
- (id)route;
- (void)setFont:(id)arg1;
- (void)setForcesUppercaseText:(bool)arg1;
- (void)setMinimumEndCharacterCount:(long long)arg1;
- (void)setRoute:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTruncationMode:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)titleLabel;
- (long long)truncationMode;

@end
