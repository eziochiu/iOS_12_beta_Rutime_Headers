/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIPlistMediaDatabase : NSObject {
    NSObject<OS_dispatch_source> * _databaseFileDispatchSource;
    NSURL * _fileURL;
    NSMutableDictionary * _homeVideoByIdentifier;
    NSMutableDictionary * _movieByIdentifier;
    NSMutableDictionary * _movieRentalByIdentifier;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
    NSMutableDictionary * _showByIdentifier;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *databaseFileDispatchSource;
@property (nonatomic, readonly) NSArray *episodes;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, retain) NSMutableDictionary *homeVideoByIdentifier;
@property (nonatomic, readonly) NSArray *homeVideos;
@property (nonatomic, retain) NSMutableDictionary *movieByIdentifier;
@property (nonatomic, retain) NSMutableDictionary *movieRentalByIdentifier;
@property (nonatomic, readonly) NSArray *movieRentals;
@property (nonatomic, readonly) NSArray *movies;
@property (nonatomic, readonly) NSArray *seasons;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (nonatomic, retain) NSMutableDictionary *showByIdentifier;
@property (nonatomic, readonly) NSArray *shows;

+ (void)_addItem:(id)arg1 itemByIdentifier:(id)arg2;
+ (void)_removeItem:(id)arg1 itemByIdentifier:(id)arg2;
+ (id)_sortedEntitiesArray:(id)arg1;

- (void).cxx_destruct;
- (void)_addEpisode:(id)arg1 showIdentifier:(id)arg2 seasonIdentifier:(id)arg3;
- (void)_addHomeVideo:(id)arg1;
- (void)_addMovie:(id)arg1;
- (void)_addMovieRental:(id)arg1;
- (void)_addSeason:(id)arg1 showIdentifier:(id)arg2;
- (void)_addShow:(id)arg1;
- (id)_dictionaryRepresentation;
- (bool)_parseDatabase;
- (void)_parseDatabaseAndSendNotification;
- (void)_removeEntityWithIdentifier:(id)arg1;
- (void)_removeEpisode:(id)arg1 fromSeason:(id)arg2;
- (void)_removeHomeVideo:(id)arg1;
- (void)_removeMovie:(id)arg1;
- (void)_removeMovieRental:(id)arg1;
- (void)_removeSeason:(id)arg1 fromShow:(id)arg2;
- (void)_removeShow:(id)arg1;
- (id)_seasons;
- (void)_startMonitoringDatabaseFile;
- (void)addEntity:(id)arg1 showIdentifier:(id)arg2 seasonIdentifier:(id)arg3;
- (id)databaseFileDispatchSource;
- (void)dealloc;
- (id)episodes;
- (id)fileURL;
- (unsigned long long)hash;
- (id)homeVideoByIdentifier;
- (id)homeVideos;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)movieByIdentifier;
- (id)movieRentalByIdentifier;
- (id)movieRentals;
- (id)movies;
- (void)removeEntityWithIdentifier:(id)arg1;
- (bool)saveToFileURL:(id)arg1 error:(out id*)arg2;
- (id)seasons;
- (id)serialDispatchQueue;
- (void)setDatabaseFileDispatchSource:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setHomeVideoByIdentifier:(id)arg1;
- (void)setMovieByIdentifier:(id)arg1;
- (void)setMovieRentalByIdentifier:(id)arg1;
- (void)setSerialDispatchQueue:(id)arg1;
- (void)setShowByIdentifier:(id)arg1;
- (id)showByIdentifier;
- (id)shows;
- (void)updateEntityWithIdentifier:(id)arg1 propertyName:(id)arg2 propertyValue:(id)arg3;

@end