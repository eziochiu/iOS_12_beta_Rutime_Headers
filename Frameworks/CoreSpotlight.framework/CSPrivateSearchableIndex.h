/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSPrivateSearchableIndex : CSSearchableIndex {
    bool  _attemptedIndexPathResolution;
    NSString * _indexPath;
    NSString * _resolvedIndexPath;
    CSIndexConnection * _savedConnection;
}

@property bool attemptedIndexPathResolution;
@property (nonatomic, retain) NSString *indexPath;
@property (nonatomic, retain) NSString *resolvedIndexPath;
@property (nonatomic, retain) CSIndexConnection *savedConnection;

+ (id)defaultSearchableIndex;

- (void).cxx_destruct;
- (bool)attemptedIndexPathResolution;
- (id)connection;
- (void)dealloc;
- (id)indexPath;
- (id)initWithPath:(id)arg1;
- (id)resolvedIndexPath;
- (id)savedConnection;
- (void)setAttemptedIndexPathResolution:(bool)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setResolvedIndexPath:(id)arg1;
- (void)setSavedConnection:(id)arg1;
- (id)xpc_dictionary_for_command:(const char *)arg1 requiresInitialization:(bool)arg2;

@end
