/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MBProjectClipsLoader : MBClipsLoader {
    NSMutableArray * _assetURLs;
    NSMutableDictionary * _identifierURLsToClipsMap;
    Project * _project;
}

@property (retain) NSMutableArray *assetURLs;
@property (retain) NSMutableDictionary *identifierURLsToClipsMap;
@property (nonatomic, retain) Project *project;

+ (bool)clipFormatValid:(id)arg1 validateVideoFormat:(bool)arg2;

- (void).cxx_destruct;
- (id)assetURLs;
- (id)clips;
- (long long)countForAllClips;
- (void)dealloc;
- (id)identifierURLsToClipsMap;
- (id)initWithProject:(id)arg1 showOnlyFavorites:(bool)arg2;
- (void)load;
- (void)loadClipAtPath:(id)arg1;
- (id)project;
- (void)projectDidCleanupUnusedMediaFiles:(id)arg1;
- (void)projectDidUndoOrRedo:(id)arg1;
- (void)projectMoviesDidChange:(id)arg1;
- (void)removeClipWithURL:(id)arg1;
- (void)setAssetURLs:(id)arg1;
- (void)setIdentifierURLsToClipsMap:(id)arg1;
- (void)setProject:(id)arg1;

@end
