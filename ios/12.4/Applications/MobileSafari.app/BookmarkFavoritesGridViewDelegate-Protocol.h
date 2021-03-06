//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BookmarkFavoritesGridView, WebBookmark;
@protocol UICollectionViewDropCoordinator, UIDropSession;

@protocol BookmarkFavoritesGridViewDelegate <NSObject>
- (void)bookmarkFavoritesGridViewContentChanged:(BookmarkFavoritesGridView *)arg1;
- (_Bool)bookmarkFavoritesGridView:(BookmarkFavoritesGridView *)arg1 canHandleDropSesson:(id <UIDropSession>)arg2;
- (void)bookmarkFavoritesGridView:(BookmarkFavoritesGridView *)arg1 dropBookmarkWithCoordinator:(id <UICollectionViewDropCoordinator>)arg2;
- (_Bool)bookmarkFavoritesGridViewIsPresentedInsideBlankTab:(BookmarkFavoritesGridView *)arg1;
- (long long)bookmarkFavoritesGridViewLayoutType:(BookmarkFavoritesGridView *)arg1;
- (void)bookmarkFavoritesGridView:(BookmarkFavoritesGridView *)arg1 updatedContentSize:(struct CGSize)arg2;
- (void)bookmarkFavoritesGridView:(BookmarkFavoritesGridView *)arg1 banFrequentlyVisitedSite:(WebBookmark *)arg2;
- (_Bool)bookmarkFavoritesGridViewCanPromoteFrequentlyVisitedSiteToFavorite:(BookmarkFavoritesGridView *)arg1;
- (void)bookmarkFavoritesGridView:(BookmarkFavoritesGridView *)arg1 promoteFrequentlyVisitedSite:(WebBookmark *)arg2 toFavoriteAtIndex:(unsigned long long)arg3;
- (void)bookmarkFavoritesGridViewDidReorderBookmarks:(BookmarkFavoritesGridView *)arg1;
- (void)bookmarkFavoritesGridView:(BookmarkFavoritesGridView *)arg1 deleteBookmark:(WebBookmark *)arg2;
- (void)bookmarkFavoritesGridView:(BookmarkFavoritesGridView *)arg1 editBookmark:(WebBookmark *)arg2;
- (_Bool)bookmarkFavoritesGridView:(BookmarkFavoritesGridView *)arg1 canCommitReorderingBookmarkFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)bookmarkFavoritesGridView:(BookmarkFavoritesGridView *)arg1 didReorderBookmarkFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (_Bool)bookmarkFavoritesGridViewShouldReorderBookmarks:(BookmarkFavoritesGridView *)arg1;
- (void)didTapOutsideBookmarkFavoritesGridView:(BookmarkFavoritesGridView *)arg1;
- (void)bookmarkFavoritesGridView:(BookmarkFavoritesGridView *)arg1 didSelectBookmark:(WebBookmark *)arg2;
@end

