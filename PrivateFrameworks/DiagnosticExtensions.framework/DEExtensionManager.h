/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

@interface DEExtensionManager : NSObject {
    id /* block */  _afterExtendedBlock;
    bool  _extendedLoaded;
    NSArray * _extensions;
    NSObject<OS_dispatch_queue> * _initialLoadQueue;
}

@property (nonatomic, copy) id /* block */ afterExtendedBlock;
@property (nonatomic) bool extendedLoaded;
@property (nonatomic, retain) NSArray *extensions;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *initialLoadQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id /* block */)afterExtendedBlock;
- (bool)extendedLoaded;
- (id)extensionForIdentifier:(id)arg1;
- (id)extensions;
- (id)extensionsWithFilter:(id)arg1;
- (id)init;
- (id)initialLoadQueue;
- (void)loadExtensions;
- (void)setAfterExtendedBlock:(id /* block */)arg1;
- (void)setExtendedLoaded:(bool)arg1;
- (void)setExtensions:(id)arg1;
- (void)setInitialLoadQueue:(id)arg1;

@end
