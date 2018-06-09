/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKPlayableUtilities : NSObject

+ (id)_defaultOpenPunchoutURLWithPlayable:(id)arg1;
+ (id)_defaultPlayPunchoutURLWithPlayable:(id)arg1;
+ (id)_defaultPunchoutURLWithPlayable:(id)arg1 URLKey:(id)arg2;
+ (id)_defaultPunchoutURLWithPlayable:(id)arg1 isPlaybackURL:(bool*)arg2;
+ (bool)_openITunesPlayableWatchListAppAvailable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (bool)_openITunesPlayableWatchListAppUnavailable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (bool)_openNonITunesPlayableWatchListAppAvailable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (bool)_openNonITunesPlayableWatchListAppUnavailable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (void)_openPunchoutURL:(id)arg1 isPlaybackURL:(bool)arg2;
+ (bool)_playNonITunesPlayableUsingAssociatedApp:(id)arg1;
+ (id)_watchListAppOpenPunchoutURLStringWithPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (id)_watchListAppOpenPunchoutURLWithITunesPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;
+ (id)_watchListAppPunchoutURLWithPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5 isPlaybackURL:(bool*)arg6;
+ (bool)openPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3;
+ (bool)openPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4;
+ (bool)openPlayable:(id)arg1 forContentType:(unsigned long long)arg2 canonicalID:(id)arg3 showCanonicalID:(id)arg4 seasonCanonicalID:(id)arg5;

@end
