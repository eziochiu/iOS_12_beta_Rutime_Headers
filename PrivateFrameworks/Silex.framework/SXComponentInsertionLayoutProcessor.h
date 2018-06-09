/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentInsertionLayoutProcessor : NSObject <SXLayoutProcessor> {
    <SXComponentInsertionManager> * _componentInsertionManager;
}

@property (nonatomic, readonly) <SXComponentInsertionManager> *componentInsertionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)componentInsertionManager;
- (id)initWithComponentInsertionManager:(id)arg1;
- (void)processLayoutBlueprint:(id)arg1 layoutDataProvider:(id)arg2;

@end
