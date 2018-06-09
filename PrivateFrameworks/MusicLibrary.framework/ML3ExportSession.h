/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ExportSession : NSData {
    ML3MusicLibrary * _library;
    NSOutputStream * _outputStream;
}

@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic, readonly) NSOutputStream *outputStream;

- (void).cxx_destruct;
- (id)begin:(unsigned int)arg1;
- (id)end;
- (id)exportPlaylistAdded:(unsigned long long)arg1;
- (id)exportPlaylistDeleted:(unsigned long long)arg1;
- (id)exportTrackAdded:(unsigned long long)arg1;
- (id)exportTrackDeleted:(unsigned long long)arg1;
- (id)exportTrackUpdated:(unsigned long long)arg1;
- (id)initWithLibrary:(id)arg1 outputStream:(id)arg2;
- (id)library;
- (id)outputStream;

@end
