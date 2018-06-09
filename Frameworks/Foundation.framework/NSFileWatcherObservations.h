/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileWatcherObservations : NSObject {
    bool  _attributesChanged;
    bool  _contentsChanged;
    bool  _deleted;
    bool  _didResetPath;
    NSString * _lastObservedPath;
    bool  _moved;
    NSString * _path;
}

- (void)addAnnouncedMoveToPath:(id)arg1;
- (void)addAttributeChange;
- (void)addContentsChange;
- (void)addDeletion;
- (void)addDetectedMoveToPath:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithPath:(id)arg1;
- (void)notifyObserver:(id /* block */)arg1;

@end
