/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIIndexToken : NSObject {
    short  _category;
    NSString * _identifier;
    short  _owningCategory;
    NSString * _text;
}

@property (nonatomic, readonly) short category;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) short owningCategory;
@property (nonatomic, readonly, copy) NSString *text;

- (short)category;
- (void)dealloc;
- (id)identifier;
- (id)initWithText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4;
- (short)owningCategory;
- (id)text;

@end
