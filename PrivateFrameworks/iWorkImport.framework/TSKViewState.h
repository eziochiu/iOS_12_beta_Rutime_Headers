/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKViewState : TSPObject {
    TSPObject * _viewStateRoot;
}

@property (nonatomic, retain) TSPObject *viewStateRoot;

+ (id)viewStateWithRoot:(id)arg1 context:(id)arg2;

- (void)dealloc;
- (id)initWithViewStateRoot:(id)arg1 context:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (void)saveToArchiver:(id)arg1;
- (void)setViewStateRoot:(id)arg1;
- (id)viewStateRoot;

@end
