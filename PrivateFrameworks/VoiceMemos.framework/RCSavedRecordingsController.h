/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCSavedRecordingsController : NSFetchedResultsController {
    <NSFetchedResultsControllerDelegate> * _defaultDelegate;
    NSPredicate * _fetchPredicate;
    NSFetchRequest * _fetchRequest;
    NSString * _searchString;
}

@property (nonatomic, readonly) NSArray *fetchedRecordings;
@property (nonatomic, copy) NSString *searchString;

- (void).cxx_destruct;
- (id)fetchedRecordings;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2;
- (id)searchString;
- (void)setDefaultDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSearchString:(id)arg1;

@end
