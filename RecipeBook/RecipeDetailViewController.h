//
//  RecipeDetailViewController.h
//  RecipeBook
//
//  Created by Shrinivas Deshpande on 7/21/14.
//  Copyright (c) 2014 GS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recipe.h"

@interface RecipeDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UIImageView *recipePhoto;
@property (weak, nonatomic) IBOutlet UILabel *prepTimeLabel;
@property (weak, nonatomic) IBOutlet UITextView *ingredientTextView;
@property (nonatomic, strong) Recipe *recipe;

@property (nonatomic, strong) IBOutlet UITableView *tableView;

@end
