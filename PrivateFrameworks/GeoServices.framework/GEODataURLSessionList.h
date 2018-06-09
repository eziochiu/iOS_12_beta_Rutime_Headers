/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataURLSessionList : NSObject {
    NSMutableArray * _lastUsedDates;
    NSMutableArray * _urlSessions;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addSession:(id)arg1;
- (unsigned long long)count;
- (id)init;
- (void)pruneSessionsNotInIdentifierArray:(id)arg1 agressive:(bool)arg2;
- (id)urlSessionForIdentifier:(id)arg1;
- (id)urlSessionForRequest:(id)arg1;

@end
