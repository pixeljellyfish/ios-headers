//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSCountedSet, _DKKnowledgeStorage;

@protocol _DKKnowledgeStorageEventNotificationDelegate

@optional
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didDeleteSyncedEvents:(NSArray *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didInsertSyncedEvents:(NSArray *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didTombstoneEventsWithStreamNameCounts:(NSCountedSet *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didDeleteEventsWithStreamNameCounts:(NSCountedSet *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didInsertLocalEventsWithStreamNameCounts:(NSCountedSet *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didInsertEventsWithStreamNameCounts:(NSCountedSet *)arg2;
@end

