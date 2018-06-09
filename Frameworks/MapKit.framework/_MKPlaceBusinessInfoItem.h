/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPlaceBusinessInfoItem : NSObject {
    NSString * _displayString;
    UIFont * _font;
    NSAttributedString * _formattedDisplayString;
    bool  _isAvailable;
    UIColor * _textColor;
}

@property (nonatomic, readonly) NSAttributedString *displayString;

+ (id)itemWithDescription:(id)arg1 availability:(bool)arg2;

- (void).cxx_destruct;
- (id)displayString;
- (bool)isEqual:(id)arg1;
- (void)setFont:(id)arg1 textColor:(id)arg2;

@end
