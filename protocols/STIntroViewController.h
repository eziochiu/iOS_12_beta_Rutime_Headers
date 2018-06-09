/* made by EzioChiu.
 */

@protocol STIntroViewController <NSObject>

@required

- (id /* block */)completionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, <STIntroViewController> *, STIntroductionModel *, void*, id, SEL
- (id)initWithIntroductionModel:(STIntroductionModel *)arg1;
- (STIntroductionModel *)model;
- (UINavigationController *)navigationController;
- (void)setCompletionBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <STIntroViewController> *, STIntroductionModel *, void*

@end
