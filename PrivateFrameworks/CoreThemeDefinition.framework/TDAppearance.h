/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDAppearance : NSManagedObject {
    unsigned short  _identifier;
    NSString * _name;
}

@property (nonatomic) unsigned short identifier;
@property (nonatomic, copy) NSString *name;

- (unsigned short)identifier;
- (id)name;
- (void)setIdentifier:(unsigned short)arg1;
- (void)setName:(id)arg1;

@end
