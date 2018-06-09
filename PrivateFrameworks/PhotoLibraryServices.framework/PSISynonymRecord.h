/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSISynonymRecord : NSObject {
    short  _category;
    NSString * _synonym;
}

@property (nonatomic) short category;
@property (nonatomic, copy) NSString *synonym;

- (short)category;
- (void)dealloc;
- (id)initWithSynonym:(id)arg1 category:(short)arg2;
- (void)setCategory:(short)arg1;
- (void)setSynonym:(id)arg1;
- (id)synonym;

@end
