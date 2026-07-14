class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {

        vector<double> ans;
        queue<TreeNode*> q;

        q.push(root);

        while (!q.empty()) {

            int size = q.size();
            long long sum = 0;

            for (int i = 0; i < size; i++) {

                TreeNode* temp = q.front();
                q.pop();

                sum += temp->val;

                if (temp->left)
                    q.push(temp->left);

                if (temp->right)
                    q.push(temp->right);
            }

            // ✅ Push average after finishing the entire level
            ans.push_back((double)sum / size);
        }

        return ans;
    }
};