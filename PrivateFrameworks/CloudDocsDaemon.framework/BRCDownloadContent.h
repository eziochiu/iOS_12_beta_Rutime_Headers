/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDownloadContent : BRCDownload {
    NSIndexSet * _desiredIndices;
    bool  _isFinderBookmark;
    unsigned int  _liveDocumentID;
    unsigned long long  _liveFileID;
    bool  _liveItemIsPackage;
    bool  _requiresTwoPhase;
    BRCServerZone * _zone;
}

@property (nonatomic, readonly) NSIndexSet *desiredIndices;
@property (nonatomic, readonly) unsigned int liveDocumentID;
@property (nonatomic, readonly) unsigned long long liveFileID;
@property (nonatomic, readonly) bool liveItemIsPackage;
@property (nonatomic, retain) BRCProgress *progress;
@property (nonatomic, readonly) bool requiresTwoPhase;

- (void).cxx_destruct;
- (bool)_prepareSecondStageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 error:(id*)arg4;
- (bool)_stageWithSession:(id)arg1 error:(id*)arg2;
- (bool)_stageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 xattrsPackage:(id)arg4 error:(id*)arg5;
- (id)description;
- (id)desiredIndices;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2;
- (int)kind;
- (unsigned int)liveDocumentID;
- (unsigned long long)liveFileID;
- (bool)liveItemIsPackage;
- (bool)requiresTwoPhase;
- (void)setProgress:(id)arg1;

@end
