/* made by EzioChiu.
 */

@protocol XCUIElementAttributes

@required

- (unsigned long long)elementType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (long long)horizontalSizeClass;
- (NSString *)identifier;
- (bool)isEnabled;
- (bool)isSelected;
- (NSString *)label;
- (NSString *)placeholderValue;
- (NSString *)title;
- (id)value;
- (long long)verticalSizeClass;

@end
