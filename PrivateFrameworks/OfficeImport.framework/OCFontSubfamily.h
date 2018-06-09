/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCFontSubfamily : NSObject {
    OCFontMetadata * _metadata;
    NSString * _name;
}

@property (nonatomic, readonly) OCFontMetadata *metadata;
@property (nonatomic, readonly) NSString *name;

+ (id)fontSubfamilyWithName:(id)arg1 metadata:(id)arg2;

- (void)dealloc;
- (id)initWithName:(id)arg1 metadata:(id)arg2;
- (id)metadata;
- (id)name;

@end
