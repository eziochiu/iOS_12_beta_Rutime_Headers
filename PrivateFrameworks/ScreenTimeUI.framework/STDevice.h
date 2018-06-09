/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STDevice : NSObject <NSCopying> {
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;

@end
